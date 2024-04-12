void fun()
{
  int entity_2 = 4;
  int entity_1 = 62;
  entity_2 = 50;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char* entity_7;
  memset(entity_5, 'T', entity_2-1);
  entity_5[entity_2-1]='';
  entity_7 = (char*)malloc(43*sizeof(char));
  entity_7[43-1]='';
  memcpy(entity_7, entity_5, entity_2*sizeof(char));
}