void fun()
{
  char* entity_8;
  char* entity_2;
  char* entity_0;
  char entity_6[65] = "";
  entity_6 = NULL;
  entity_2 = (char*)malloc(66*sizeof(char));
  entity_2[66-1]='';
  memset(entity_6, 'd', 65-1);
  entity_6[65-1]='';
  entity_0 = (char*)malloc(62*sizeof(char));
  entity_0[62-1]='';
  entity_8 = (char*)malloc(36*sizeof(char));
  entity_8[36-1]='';
  entity_6[100] = 'f';
}