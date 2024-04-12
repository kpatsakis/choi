void fun()
{
  int entity_5 = 12;
  int entity_2 = 76;
  entity_2 = 45;
  char* entity_0;
  char* entity_3;
  char entity_1[44] = "";
  entity_1 = NULL;
  entity_0 = (char*)malloc(70*sizeof(char));
  entity_0[70-1]='';
  memset(entity_1, 'V', 44-1);
  entity_1[44-1]='';
  entity_3 = (char*)malloc(99*sizeof(char));
  entity_3[99-1]='';
  entity_1[entity_2] = 'R';
}