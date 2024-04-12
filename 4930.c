void fun()
{
  int entity_3 = 7;
  char entity_8[80] = "";
  entity_8 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(52*sizeof(char));
  entity_2[52-1]='';
  memset(entity_8, 'I', 80-1);
  entity_8[80-1]='';
  entity_8[entity_3] = 'h';
}