void fun()
{
  int entity_9 = 91;
  int entity_0 = 45;
  char* entity_5;
  char entity_1[14] = "";
  entity_1 = NULL;
  char entity_2[67] = "";
  entity_2 = NULL;
  memset(entity_2, 'F', 67-1);
  entity_2[67-1]='';
  memset(entity_1, 'o', 14-1);
  entity_1[14-1]='';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memcpy(entity_5, entity_1, 14*sizeof(char));
}