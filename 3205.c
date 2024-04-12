void fun()
{
  int entity_6 = 5;
  entity_6 = 57;
  char entity_4[41] = "";
  entity_4 = NULL;
  char* entity_9;
  char entity_7 = 'u';
  char* entity_1;
  entity_1 = (char*)malloc(59*sizeof(char));
  entity_1[59-1]='';
  memset(entity_4, 'F', 41-1);
  entity_4[41-1]='';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memcpy(entity_9, entity_4, 41*sizeof(char));
}