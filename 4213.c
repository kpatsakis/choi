void fun()
{
  int entity_8 = 64;
  int entity_6 = 74;
  char* entity_3;
  char entity_1[93] = "";
  entity_1 = NULL;
  char entity_7[47] = "";
  entity_7 = NULL;
  memset(entity_1, 'l', 93-1);
  entity_1[93-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  memset(entity_7, 'G', 47-1);
  entity_7[47-1]='';
  entity_6 = 42;
  memcpy(entity_3, entity_7, 47*sizeof(char));
}