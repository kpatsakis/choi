void fun()
{
  char* entity_4;
  char entity_3 = 'V';
  char entity_7[66] = "";
  entity_7 = NULL;
  entity_4 = (char*)malloc(97*sizeof(char));
  entity_4[97-1]='';
  memset(entity_7, 'Z', 66-1);
  entity_7[66-1]='';
  entity_7[97] = 'C';
}