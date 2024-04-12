void fun()
{
  int entity_3 = 37;
  int entity_2 = 29;
  char entity_7[4] = "";
  entity_7 = NULL;
  char* entity_9;
  char* entity_1;
  entity_1 = (char*)malloc(36*sizeof(char));
  entity_1[36-1]='';
  memset(entity_7, 'W', 4-1);
  entity_7[4-1]='';
  entity_9 = (char*)malloc(16*sizeof(char));
  entity_9[16-1]='';
  memcpy(entity_1, entity_7, 4*sizeof(char));
}