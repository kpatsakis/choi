void fun()
{
  int entity_0 = 47;
  char* entity_1;
  char entity_4[92] = "";
  entity_4 = NULL;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  char entity_2 = 'K';
  memset(entity_4, 'E', 92-1);
  entity_4[92-1]='';
  entity_1 = (char*)malloc(8*sizeof(char));
  entity_1[8-1]='';
  memset(entity_8, 'w', entity_0-1);
  entity_8[entity_0-1]='';
  entity_8[40] = 'f';
}