void fun()
{
  int entity_1 = 23;
  int entity_3 = 45;
  entity_1 = 61;
  char* entity_5;
  char* entity_2;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  memset(entity_0, 'X', entity_1-1);
  entity_0[entity_1-1]='';
  entity_5 = (char*)malloc(28*sizeof(char));
  entity_5[28-1]='';
  entity_2 = (char*)malloc(79*sizeof(char));
  entity_2[79-1]='';
  memcpy(entity_5, entity_0, entity_1*sizeof(char));
}