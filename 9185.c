void fun()
{
  char* entity_5;
  char entity_0[40] = "";
  entity_0 = NULL;
  char* entity_1;
  entity_5 = (char*)malloc(85*sizeof(char));
  entity_5[85-1]='';
  memset(entity_0, 'p', 40-1);
  entity_0[40-1]='';
  entity_1 = (char*)malloc(79*sizeof(char));
  entity_1[79-1]='';
  memcpy(entity_5, entity_0, 40*sizeof(char));
}