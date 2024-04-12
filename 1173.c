void fun()
{
  int entity_3 = 98;
  entity_3 = 21;
  char* entity_5;
  char* entity_1;
  char entity_0[87] = "";
  entity_0 = NULL;
  entity_1 = (char*)malloc(0*sizeof(char));
  entity_1[0-1]='';
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memset(entity_0, 'd', 87-1);
  entity_0[87-1]='';
  memcpy(entity_5, entity_0, 87*sizeof(char));
}