void fun()
{
  int entity_5 = 60;
  entity_5 = 35;
  char entity_8[43] = "";
  entity_8 = NULL;
  char* entity_4;
  char entity_6 = 'o';
  memset(entity_8, 'N', 43-1);
  entity_8[43-1]='';
  entity_4 = (char*)malloc(67*sizeof(char));
  entity_4[67-1]='';
  entity_8[entity_5] = 'r';
}