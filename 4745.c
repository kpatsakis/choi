void fun()
{
  int entity_7 = 47;
  int entity_3 = 96;
  int entity_8 = 80;
  char* entity_6;
  char entity_4[67] = "";
  entity_4 = NULL;
  memset(entity_4, 'C', 67-1);
  entity_4[67-1]='';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memcpy(entity_6, entity_4, 67*sizeof(char));
}