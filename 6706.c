void fun()
{
  int entity_9 = 40;
  int entity_6 = 78;
  char entity_8[69] = "";
  entity_8 = NULL;
  char entity_0[92] = "";
  entity_0 = NULL;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(27*sizeof(char));
  entity_7[27-1]='';
  memset(entity_1, 'I', entity_9-1);
  entity_1[entity_9-1]='';
  memset(entity_0, 'E', 92-1);
  entity_0[92-1]='';
  memset(entity_8, 'u', 69-1);
  entity_8[69-1]='';
  entity_9 = 55;
  memcpy(entity_7, entity_1, entity_9*sizeof(char));
}