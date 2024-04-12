void fun()
{
  char* entity_0;
  char* entity_8;
  char* entity_1;
  char entity_2[46] = "";
  entity_2 = NULL;
  entity_8 = (char*)malloc(62*sizeof(char));
  entity_8[62-1]='';
  entity_0 = (char*)malloc(88*sizeof(char));
  entity_0[88-1]='';
  memset(entity_2, 'p', 46-1);
  entity_2[46-1]='';
  entity_1 = (char*)malloc(72*sizeof(char));
  entity_1[72-1]='';
  strcpy(entity_0, entity_2);
}