void fun()
{
  int entity_7 = 51;
  int entity_9 = 42;
  char entity_4[80] = "";
  entity_4 = NULL;
  char* entity_1;
  char entity_5[70] = "";
  entity_5 = NULL;
  char* entity_3;
  memset(entity_4, 'v', 80-1);
  entity_4[80-1]='';
  entity_1 = (char*)malloc(2*sizeof(char));
  entity_1[2-1]='';
  memset(entity_5, 'P', 70-1);
  entity_5[70-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  entity_9 = 36;
  memcpy(entity_3, entity_5, 70*sizeof(char));
}