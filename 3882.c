void fun()
{
  int entity_4 = 22;
  entity_4 = 96;
  char* entity_6;
  char* entity_2;
  char* entity_0;
  char entity_3[68] = "";
  entity_3 = NULL;
  entity_0 = (char*)malloc(64*sizeof(char));
  entity_0[64-1]='';
  memset(entity_3, 'B', 68-1);
  entity_3[68-1]='';
  entity_6 = (char*)malloc(99*sizeof(char));
  entity_6[99-1]='';
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memcpy(entity_2, entity_3, 68*sizeof(char));
}