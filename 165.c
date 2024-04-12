void fun()
{
  char entity_2 = 'P';
  char* entity_1;
  char* entity_6;
  char entity_3[66] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(35*sizeof(char));
  entity_1[35-1]='';
  entity_6 = (char*)malloc(37*sizeof(char));
  entity_6[37-1]='';
  memset(entity_3, 'D', 66-1);
  entity_3[66-1]='';
  memcpy(entity_1, entity_3, 66*sizeof(char));
}