void fun()
{
  int entity_6 = 93;
  int entity_8 = 12;
  int entity_7 = 49;
  entity_6 = 4;
  char* entity_1;
  char entity_3[93] = "";
  entity_3 = NULL;
  char* entity_9;
  entity_1 = (char*)malloc(25*sizeof(char));
  entity_1[25-1]='';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memset(entity_3, 'N', 93-1);
  entity_3[93-1]='';
  memcpy(entity_9, entity_3, 93*sizeof(char));
}