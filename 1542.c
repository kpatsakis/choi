void fun()
{
  int entity_9 = 90;
  entity_9 = 13;
  char entity_1[12] = "";
  entity_1 = NULL;
  char entity_6[24] = "";
  entity_6 = NULL;
  char* entity_7;
  char* entity_3;
  char entity_8[2] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_8, 'E', 2-1);
  entity_8[2-1]='';
  entity_7 = (char*)malloc(11*sizeof(char));
  entity_7[11-1]='';
  memset(entity_1, 'J', 12-1);
  entity_1[12-1]='';
  memset(entity_6, 'S', 24-1);
  entity_6[24-1]='';
  memcpy(entity_3, entity_8, 2*sizeof(char));
}