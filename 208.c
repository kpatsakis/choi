void fun()
{
  int entity_6 = 3;
  char entity_9[22] = "";
  entity_9 = NULL;
  char* entity_0;
  char* entity_3;
  char* entity_5;
  entity_0 = (char*)malloc(37*sizeof(char));
  entity_0[37-1]='';
  entity_5 = (char*)malloc(80*sizeof(char));
  entity_5[80-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  memset(entity_9, 'F', 22-1);
  entity_9[22-1]='';
  entity_6 = 61;
  memcpy(entity_3, entity_9, 22*sizeof(char));
}