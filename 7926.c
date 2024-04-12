void fun()
{
  int entity_2 = 85;
  int entity_4 = 48;
  char* entity_5;
  char* entity_6;
  char entity_0[80] = "";
  entity_0 = NULL;
  memset(entity_0, 'f', 80-1);
  entity_0[80-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  entity_6 = (char*)malloc(47*sizeof(char));
  entity_6[47-1]='';
  memcpy(entity_5, entity_0, 80*sizeof(char));
}