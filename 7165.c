void fun()
{
  int entity_1 = 20;
  char entity_0 = 'v';
  char entity_2[63] = "";
  entity_2 = NULL;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_3, 'Q', entity_1-1);
  entity_3[entity_1-1]='';
  memset(entity_2, 'L', 63-1);
  entity_2[63-1]='';
  entity_7 = (char*)malloc(47*sizeof(char));
  entity_7[47-1]='';
  entity_3[31] = 'j';
}