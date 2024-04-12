void fun()
{
  char* entity_2;
  char entity_6[13] = "";
  entity_6 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(68*sizeof(char));
  entity_4[68-1]='';
  entity_2 = (char*)malloc(43*sizeof(char));
  entity_2[43-1]='';
  memset(entity_6, 'X', 13-1);
  entity_6[13-1]='';
  memcpy(entity_2, entity_6, 13*sizeof(char));
}