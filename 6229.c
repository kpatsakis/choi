void fun()
{
  char entity_4 = 'M';
  char entity_2[48] = "";
  entity_2 = NULL;
  char* entity_7;
  char* entity_5;
  entity_5 = (char*)malloc(5*sizeof(char));
  entity_5[5-1]='';
  memset(entity_2, 'Z', 48-1);
  entity_2[48-1]='';
  entity_7 = (char*)malloc(4*sizeof(char));
  entity_7[4-1]='';
  memcpy(entity_7, entity_2, 48*sizeof(char));
}