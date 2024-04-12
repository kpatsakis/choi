void fun()
{
  int entity_3 = 61;
  entity_3 = 96;
  char* entity_9;
  char entity_7[74] = "";
  entity_7 = NULL;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char* entity_2;
  memset(entity_8, 'z', entity_3-1);
  entity_8[entity_3-1]='';
  entity_2 = (char*)malloc(42*sizeof(char));
  entity_2[42-1]='';
  entity_9 = (char*)malloc(64*sizeof(char));
  entity_9[64-1]='';
  memset(entity_7, 'Q', 74-1);
  entity_7[74-1]='';
  memcpy(entity_2, entity_8, entity_3*sizeof(char));
}