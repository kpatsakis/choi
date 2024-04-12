void fun()
{
  int entity_5 = 29;
  int entity_3 = 31;
  int entity_8 = 43;
  char* entity_2;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  entity_2 = (char*)malloc(25*sizeof(char));
  entity_2[25-1]='';
  memset(entity_4, 'V', entity_5-1);
  entity_4[entity_5-1]='';
  entity_5 = 35;
  memcpy(entity_2, entity_4, entity_5*sizeof(char));
}