void fun()
{
  int entity_3 = 13;
  entity_3 = 43;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char entity_7 = 'o';
  char* entity_5;
  char* entity_4;
  entity_4 = (char*)malloc(21*sizeof(char));
  entity_4[21-1]='';
  memset(entity_0, 'B', entity_3-1);
  entity_0[entity_3-1]='';
  entity_5 = (char*)malloc(47*sizeof(char));
  entity_5[47-1]='';
  entity_0[92] = 'u';
}