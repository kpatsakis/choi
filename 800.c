void fun()
{
  int entity_0 = 11;
  char* entity_6;
  char entity_2[84] = "";
  entity_2 = NULL;
  memset(entity_2, 'q', 84-1);
  entity_2[84-1]='';
  entity_6 = (char*)malloc(16*sizeof(char));
  entity_6[16-1]='';
  entity_2[entity_0] = 'h';
}