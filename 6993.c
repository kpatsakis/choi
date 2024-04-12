void fun()
{
  int entity_4 = 81;
  entity_4 = 64;
  char entity_9 = 'd';
  char* entity_0;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  char* entity_3;
  char* entity_6;
  memset(entity_1, 'M', entity_4-1);
  entity_1[entity_4-1]='';
  entity_6 = (char*)malloc(17*sizeof(char));
  entity_6[17-1]='';
  entity_3 = (char*)malloc(25*sizeof(char));
  entity_3[25-1]='';
  entity_0 = (char*)malloc(9*sizeof(char));
  entity_0[9-1]='';
  memcpy(entity_6, entity_1, entity_4*sizeof(char));
}