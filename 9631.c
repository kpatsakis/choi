void fun()
{
  int entity_2 = 23;
  char* entity_0;
  char entity_3[17] = "";
  entity_3 = NULL;
  char* entity_6;
  entity_0 = (char*)malloc(21*sizeof(char));
  entity_0[21-1]='';
  memset(entity_3, 'h', 17-1);
  entity_3[17-1]='';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  entity_2 = 68;
  memcpy(entity_6, entity_3, 17*sizeof(char));
}