void fun()
{
  char* entity_2;
  char* entity_5;
  char entity_6[48] = "";
  entity_6 = NULL;
  entity_5 = (char*)malloc(19*sizeof(char));
  entity_5[19-1]='';
  memset(entity_6, 'r', 48-1);
  entity_6[48-1]='';
  entity_2 = (char*)malloc(21*sizeof(char));
  entity_2[21-1]='';
  memcpy(entity_5, entity_6, 48*sizeof(char));
}