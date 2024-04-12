void fun()
{
  int entity_0 = 50;
  int entity_1 = 71;
  char entity_2[10] = "";
  entity_2 = NULL;
  char entity_4[29] = "";
  entity_4 = NULL;
  char* entity_9;
  char* entity_7;
  memset(entity_2, 'b', 10-1);
  entity_2[10-1]='';
  entity_9 = (char*)malloc(22*sizeof(char));
  entity_9[22-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_4, 'Y', 29-1);
  entity_4[29-1]='';
  memcpy(entity_7, entity_4, 29*sizeof(char));
}