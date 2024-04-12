void fun()
{
  int entity_5 = 77;
  char* entity_6;
  char entity_1[9] = "";
  entity_1 = NULL;
  char* entity_8;
  char entity_7 = 'I';
  entity_6 = (char*)malloc(47*sizeof(char));
  entity_6[47-1]='';
  memset(entity_1, 'v', 9-1);
  entity_1[9-1]='';
  entity_8 = (char*)malloc(1*sizeof(char));
  entity_8[1-1]='';
  entity_1[entity_5] = 'b';
}