void fun()
{
  int entity_1 = 16;
  char* entity_3;
  char entity_6 = 'K';
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  memset(entity_5, 'y', entity_1-1);
  entity_5[entity_1-1]='';
  entity_3 = (char*)malloc(6*sizeof(char));
  entity_3[6-1]='';
  memcpy(entity_3, entity_5, entity_1*sizeof(char));
}