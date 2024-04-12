void fun()
{
  int entity_4 = 15;
  char* entity_9;
  char entity_2[32] = "";
  entity_2 = NULL;
  char* entity_1;
  memset(entity_2, 'b', 32-1);
  entity_2[32-1]='';
  entity_1 = (char*)malloc(10*sizeof(char));
  entity_1[10-1]='';
  entity_9 = (char*)malloc(80*sizeof(char));
  entity_9[80-1]='';
  memcpy(entity_9, entity_2, 32*sizeof(char));
}