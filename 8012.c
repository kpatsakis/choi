void fun()
{
  int entity_3 = 45;
  int entity_4 = 18;
  char entity_8[59] = "";
  entity_8 = NULL;
  char* entity_2;
  memset(entity_8, 'v', 59-1);
  entity_8[59-1]='';
  entity_2 = (char*)malloc(80*sizeof(char));
  entity_2[80-1]='';
  entity_8[entity_4] = 'h';
}