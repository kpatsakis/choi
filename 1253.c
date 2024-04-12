void fun()
{
  int entity_1 = 49;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char* entity_7;
  char entity_8 = 'I';
  char* entity_2;
  entity_2 = (char*)malloc(95*sizeof(char));
  entity_2[95-1]='';
  entity_7 = (char*)malloc(59*sizeof(char));
  entity_7[59-1]='';
  memset(entity_4, 'c', entity_1-1);
  entity_4[entity_1-1]='';
  memcpy(entity_7, entity_4, entity_1*sizeof(char));
}