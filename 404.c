void fun()
{
  int entity_0 = 69;
  entity_0 = 9;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char* entity_2;
  char* entity_5;
  entity_2 = (char*)malloc(64*sizeof(char));
  entity_2[64-1]='';
  memset(entity_1, 'H', entity_0-1);
  entity_1[entity_0-1]='';
  entity_5 = (char*)malloc(79*sizeof(char));
  entity_5[79-1]='';
  entity_1[63] = 'P';
}