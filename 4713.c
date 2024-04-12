void fun()
{
  int entity_9 = 7;
  char entity_6[96] = "";
  entity_6 = NULL;
  char* entity_2;
  char* entity_1;
  memset(entity_6, 'b', 96-1);
  entity_6[96-1]='';
  entity_1 = (char*)malloc(6*sizeof(char));
  entity_1[6-1]='';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  memcpy(entity_2, entity_6, 96*sizeof(char));
}