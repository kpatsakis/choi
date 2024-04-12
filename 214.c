void fun()
{
  int entity_0 = 91;
  int entity_5 = 12;
  char* entity_1;
  char entity_2[44] = "";
  entity_2 = NULL;
  char* entity_4;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  memset(entity_2, 'b', 44-1);
  entity_2[44-1]='';
  memset(entity_3, 'G', entity_0-1);
  entity_3[entity_0-1]='';
  entity_1 = (char*)malloc(99*sizeof(char));
  entity_1[99-1]='';
  entity_4 = (char*)malloc(84*sizeof(char));
  entity_4[84-1]='';
  entity_0 = 48;
  strcpy(entity_4, entity_3);
}