void fun()
{
  char* entity_8;
  char* entity_2;
  char entity_3[76] = "";
  entity_3 = NULL;
  char entity_5[93] = "";
  entity_5 = NULL;
  memset(entity_5, 'F', 93-1);
  entity_5[93-1]='';
  memset(entity_3, 'b', 76-1);
  entity_3[76-1]='';
  entity_2 = (char*)malloc(10*sizeof(char));
  entity_2[10-1]='';
  entity_8 = (char*)malloc(36*sizeof(char));
  entity_8[36-1]='';
  memcpy(entity_8, entity_5, 93*sizeof(char));
}