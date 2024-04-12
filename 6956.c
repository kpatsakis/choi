void fun()
{
  int entity_1 = 67;
  int entity_4 = 93;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char* entity_0;
  char* entity_7;
  char entity_2[72] = "";
  entity_2 = NULL;
  memset(entity_2, 'q', 72-1);
  entity_2[72-1]='';
  entity_0 = (char*)malloc(62*sizeof(char));
  entity_0[62-1]='';
  memset(entity_5, 'y', entity_1-1);
  entity_5[entity_1-1]='';
  entity_7 = (char*)malloc(1*sizeof(char));
  entity_7[1-1]='';
  entity_1 = 61;
  memcpy(entity_0, entity_5, entity_1*sizeof(char));
}