void fun()
{
  int entity_4 = 51;
  char* entity_5;
  char* entity_9;
  char* entity_3;
  char entity_6[69] = "";
  entity_6 = NULL;
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  entity_5 = (char*)malloc(28*sizeof(char));
  entity_5[28-1]='';
  entity_9 = (char*)malloc(9*sizeof(char));
  entity_9[9-1]='';
  memset(entity_6, 'r', 69-1);
  entity_6[69-1]='';
  memcpy(entity_3, entity_6, 69*sizeof(char));
}