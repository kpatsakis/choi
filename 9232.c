void fun()
{
  int entity_6 = 15;
  char entity_7[47] = "";
  entity_7 = NULL;
  char* entity_0;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  char* entity_4;
  char entity_8[46] = "";
  entity_8 = NULL;
  entity_0 = (char*)malloc(9*sizeof(char));
  entity_0[9-1]='';
  memset(entity_2, 'i', entity_6-1);
  entity_2[entity_6-1]='';
  memset(entity_8, 'f', 46-1);
  entity_8[46-1]='';
  entity_4 = (char*)malloc(42*sizeof(char));
  entity_4[42-1]='';
  memset(entity_7, 'q', 47-1);
  entity_7[47-1]='';
  entity_6 = 12;
  memcpy(entity_0, entity_2, entity_6*sizeof(char));
}