void fun()
{
  int entity_2 = 31;
  int entity_9 = 2;
  char* entity_8;
  char entity_3[29] = "";
  entity_3 = NULL;
  char entity_7[69] = "";
  entity_7 = NULL;
  char* entity_1;
  entity_8 = (char*)malloc(88*sizeof(char));
  entity_8[88-1]='';
  memset(entity_3, 'S', 29-1);
  entity_3[29-1]='';
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  memset(entity_7, 'S', 69-1);
  entity_7[69-1]='';
  memcpy(entity_1, entity_7, 69*sizeof(char));
}