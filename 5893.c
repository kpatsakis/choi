void fun()
{
  int entity_5 = 59;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char* entity_7;
  memset(entity_2, 'l', entity_5-1);
  entity_2[entity_5-1]='';
  entity_7 = (char*)malloc(6*sizeof(char));
  entity_7[6-1]='';
  entity_5 = 15;
  memcpy(entity_7, entity_2, entity_5*sizeof(char));
}