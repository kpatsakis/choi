void fun()
{
  int entity_6 = 93;
  entity_6 = 16;
  char entity_2 = 'R';
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char* entity_7;
  memset(entity_5, 'q', entity_6-1);
  entity_5[entity_6-1]='';
  entity_7 = (char*)malloc(18*sizeof(char));
  entity_7[18-1]='';
  memcpy(entity_7, entity_5, entity_6*sizeof(char));
}