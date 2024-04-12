void fun()
{
  int entity_1 = 15;
  int entity_4 = 70;
  char entity_3 = 'W';
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char* entity_2;
  memset(entity_5, 'V', entity_1-1);
  entity_5[entity_1-1]='';
  entity_2 = (char*)malloc(40*sizeof(char));
  entity_2[40-1]='';
  memcpy(entity_2, entity_5, entity_1*sizeof(char));
}