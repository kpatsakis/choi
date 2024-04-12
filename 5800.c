void fun()
{
  int entity_6 = 47;
  char entity_9[31] = "";
  entity_9 = NULL;
  char* entity_3;
  char* entity_1;
  memset(entity_9, 'O', 31-1);
  entity_9[31-1]='';
  entity_1 = (char*)malloc(50*sizeof(char));
  entity_1[50-1]='';
  entity_3 = (char*)malloc(51*sizeof(char));
  entity_3[51-1]='';
  memcpy(entity_3, entity_9, 31*sizeof(char));
}