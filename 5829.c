void fun()
{
  int entity_3 = 1;
  char* entity_6;
  char* entity_1;
  char entity_5[5] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(50*sizeof(char));
  entity_6[50-1]='';
  memset(entity_5, 'E', 5-1);
  entity_5[5-1]='';
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  memcpy(entity_1, entity_5, 5*sizeof(char));
}