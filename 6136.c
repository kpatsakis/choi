void fun()
{
  int entity_9 = 16;
  entity_9 = 43;
  char* entity_1;
  char entity_2[42] = "";
  entity_2 = NULL;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  char* entity_8;
  char entity_5[80] = "";
  entity_5 = NULL;
  memset(entity_7, 'o', entity_9-1);
  entity_7[entity_9-1]='';
  entity_8 = (char*)malloc(7*sizeof(char));
  entity_8[7-1]='';
  memset(entity_2, 't', 42-1);
  entity_2[42-1]='';
  memset(entity_5, 'L', 80-1);
  entity_5[80-1]='';
  entity_1 = (char*)malloc(99*sizeof(char));
  entity_1[99-1]='';
  memcpy(entity_8, entity_7, entity_9*sizeof(char));
}