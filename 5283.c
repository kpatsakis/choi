void fun()
{
  char* entity_7;
  char* entity_8;
  char entity_1[46] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(99*sizeof(char));
  entity_7[99-1]='';
  memset(entity_1, 'L', 46-1);
  entity_1[46-1]='';
  entity_8 = (char*)malloc(68*sizeof(char));
  entity_8[68-1]='';
  strcpy(entity_7, entity_1);
}